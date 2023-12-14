

#include "huaweicloud/lts/v2/model/PreviewAgencyLogAccessReqListBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




PreviewAgencyLogAccessReqListBody::PreviewAgencyLogAccessReqListBody()
{
    previewAgencyListIsSet_ = false;
}

PreviewAgencyLogAccessReqListBody::~PreviewAgencyLogAccessReqListBody() = default;

void PreviewAgencyLogAccessReqListBody::validate()
{
}

web::json::value PreviewAgencyLogAccessReqListBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(previewAgencyListIsSet_) {
        val[utility::conversions::to_string_t("preview_agency_list")] = ModelBase::toJson(previewAgencyList_);
    }

    return val;
}
bool PreviewAgencyLogAccessReqListBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preview_agency_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preview_agency_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PreviewAgencyLogAccessReqBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviewAgencyList(refVal);
        }
    }
    return ok;
}


std::vector<PreviewAgencyLogAccessReqBody>& PreviewAgencyLogAccessReqListBody::getPreviewAgencyList()
{
    return previewAgencyList_;
}

void PreviewAgencyLogAccessReqListBody::setPreviewAgencyList(const std::vector<PreviewAgencyLogAccessReqBody>& value)
{
    previewAgencyList_ = value;
    previewAgencyListIsSet_ = true;
}

bool PreviewAgencyLogAccessReqListBody::previewAgencyListIsSet() const
{
    return previewAgencyListIsSet_;
}

void PreviewAgencyLogAccessReqListBody::unsetpreviewAgencyList()
{
    previewAgencyListIsSet_ = false;
}

}
}
}
}
}


