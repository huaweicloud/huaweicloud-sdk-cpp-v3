

#include "huaweicloud/dds/v3/model/DownloadErrorlogRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DownloadErrorlogRequestBody::DownloadErrorlogRequestBody()
{
    fileNameListIsSet_ = false;
    nodeIdListIsSet_ = false;
}

DownloadErrorlogRequestBody::~DownloadErrorlogRequestBody() = default;

void DownloadErrorlogRequestBody::validate()
{
}

web::json::value DownloadErrorlogRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameListIsSet_) {
        val[utility::conversions::to_string_t("file_name_list")] = ModelBase::toJson(fileNameList_);
    }
    if(nodeIdListIsSet_) {
        val[utility::conversions::to_string_t("node_id_list")] = ModelBase::toJson(nodeIdList_);
    }

    return val;
}
bool DownloadErrorlogRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DownloadErrorlogRequestBody::getFileNameList()
{
    return fileNameList_;
}

void DownloadErrorlogRequestBody::setFileNameList(const std::vector<std::string>& value)
{
    fileNameList_ = value;
    fileNameListIsSet_ = true;
}

bool DownloadErrorlogRequestBody::fileNameListIsSet() const
{
    return fileNameListIsSet_;
}

void DownloadErrorlogRequestBody::unsetfileNameList()
{
    fileNameListIsSet_ = false;
}

std::vector<std::string>& DownloadErrorlogRequestBody::getNodeIdList()
{
    return nodeIdList_;
}

void DownloadErrorlogRequestBody::setNodeIdList(const std::vector<std::string>& value)
{
    nodeIdList_ = value;
    nodeIdListIsSet_ = true;
}

bool DownloadErrorlogRequestBody::nodeIdListIsSet() const
{
    return nodeIdListIsSet_;
}

void DownloadErrorlogRequestBody::unsetnodeIdList()
{
    nodeIdListIsSet_ = false;
}

}
}
}
}
}


