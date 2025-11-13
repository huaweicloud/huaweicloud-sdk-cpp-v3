
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4InstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4InstanceInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 本地订阅信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Subscription4InstanceInfo
    : public ModelBase
{
public:
    Subscription4InstanceInfo();
    virtual ~Subscription4InstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subscription4InstanceInfo members

    /// <summary>
    /// 发布服务器来源为云上实例时的发布实例id。
    /// </summary>

    std::string getPublicationInstanceId() const;
    bool publicationInstanceIdIsSet() const;
    void unsetpublicationInstanceId();
    void setPublicationInstanceId(const std::string& value);

    /// <summary>
    /// 发布服务器名称。
    /// </summary>

    std::string getPublicationInstanceName() const;
    bool publicationInstanceNameIsSet() const;
    void unsetpublicationInstanceName();
    void setPublicationInstanceName(const std::string& value);


protected:
    std::string publicationInstanceId_;
    bool publicationInstanceIdIsSet_;
    std::string publicationInstanceName_;
    bool publicationInstanceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4InstanceInfo_H_
