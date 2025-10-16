
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ReplicationInstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ReplicationInstanceInfo_H_


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
/// 实例详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ReplicationInstanceInfo
    : public ModelBase
{
public:
    ReplicationInstanceInfo();
    virtual ~ReplicationInstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicationInstanceInfo members

    /// <summary>
    /// 实例id
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
    /// 内网地址。
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string dataVip_;
    bool dataVipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ReplicationInstanceInfo_H_
