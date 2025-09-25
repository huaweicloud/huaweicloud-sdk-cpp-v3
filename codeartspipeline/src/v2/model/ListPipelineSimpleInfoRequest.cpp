

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineSimpleInfoRequest::ListPipelineSimpleInfoRequest()
{
    bodyIsSet_ = false;
}

ListPipelineSimpleInfoRequest::~ListPipelineSimpleInfoRequest() = default;

void ListPipelineSimpleInfoRequest::validate()
{
}

web::json::value ListPipelineSimpleInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPipelineSimpleInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListPipelineSimpleInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListPipelineSimpleInfoRequestBody ListPipelineSimpleInfoRequest::getBody() const
{
    return body_;
}

void ListPipelineSimpleInfoRequest::setBody(const ListPipelineSimpleInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelineSimpleInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelineSimpleInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


