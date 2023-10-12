

#include "huaweicloud/dds/v3/model/DownloadSlowlogRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DownloadSlowlogRequestBody::DownloadSlowlogRequestBody()
{
    fileNameListIsSet_ = false;
    nodeIdListIsSet_ = false;
}

DownloadSlowlogRequestBody::~DownloadSlowlogRequestBody() = default;

void DownloadSlowlogRequestBody::validate()
{
}

web::json::value DownloadSlowlogRequestBody::toJson() const
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
bool DownloadSlowlogRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& DownloadSlowlogRequestBody::getFileNameList()
{
    return fileNameList_;
}

void DownloadSlowlogRequestBody::setFileNameList(const std::vector<std::string>& value)
{
    fileNameList_ = value;
    fileNameListIsSet_ = true;
}

bool DownloadSlowlogRequestBody::fileNameListIsSet() const
{
    return fileNameListIsSet_;
}

void DownloadSlowlogRequestBody::unsetfileNameList()
{
    fileNameListIsSet_ = false;
}

std::vector<std::string>& DownloadSlowlogRequestBody::getNodeIdList()
{
    return nodeIdList_;
}

void DownloadSlowlogRequestBody::setNodeIdList(const std::vector<std::string>& value)
{
    nodeIdList_ = value;
    nodeIdListIsSet_ = true;
}

bool DownloadSlowlogRequestBody::nodeIdListIsSet() const
{
    return nodeIdListIsSet_;
}

void DownloadSlowlogRequestBody::unsetnodeIdList()
{
    nodeIdListIsSet_ = false;
}

}
}
}
}
}


