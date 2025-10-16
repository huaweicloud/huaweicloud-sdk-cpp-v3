
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4InstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4InstanceInfo_H_


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
/// 直接创建订阅时需要的参数。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSubscription4InstanceInfo
    : public ModelBase
{
public:
    CreateSubscription4InstanceInfo();
    virtual ~CreateSubscription4InstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscription4InstanceInfo members

    /// <summary>
    /// 直接创建订阅时，服务器来源为云上实例的发布id。
    /// </summary>

    std::string getPublicationId() const;
    bool publicationIdIsSet() const;
    void unsetpublicationId();
    void setPublicationId(const std::string& value);

    /// <summary>
    /// 直接创建订阅时，服务器来源为云上实例的发布名称。
    /// </summary>

    std::string getPublicationName() const;
    bool publicationNameIsSet() const;
    void unsetpublicationName();
    void setPublicationName(const std::string& value);


protected:
    std::string publicationId_;
    bool publicationIdIsSet_;
    std::string publicationName_;
    bool publicationNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4InstanceInfo_H_
