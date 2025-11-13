
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancePublicatiosInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancePublicatiosInfo_H_


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
/// 实例发布信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstancePublicatiosInfo
    : public ModelBase
{
public:
    InstancePublicatiosInfo();
    virtual ~InstancePublicatiosInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstancePublicatiosInfo members

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 发布id。
    /// </summary>

    std::string getPublicationId() const;
    bool publicationIdIsSet() const;
    void unsetpublicationId();
    void setPublicationId(const std::string& value);

    /// <summary>
    /// 发布名称。
    /// </summary>

    std::string getPublicationName() const;
    bool publicationNameIsSet() const;
    void unsetpublicationName();
    void setPublicationName(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancePublicatiosInfo_H_
