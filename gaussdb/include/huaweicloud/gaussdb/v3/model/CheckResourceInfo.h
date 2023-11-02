
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckResourceInfo
    : public ModelBase
{
public:
    CheckResourceInfo();
    virtual ~CheckResourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckResourceInfo members

    /// <summary>
    /// 企业项目ID。action为createInstance时必填。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 实例数量。action为createInstance时必填。
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 实例类型，目前仅支持Cluster。action为createInstance时必填。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 可用区类型，单可用区single或多可用区multi。action为createInstance时必填。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// 节点数量。action为createInstance、createReadonlyNode时必填。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 规格码。action为createInstance、resizeFlavor时必填。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 可用区码。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 子网ID。action为createInstance时必填。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 实例ID。action为createReadonlyNode、resizeFlavor时必填。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceInfo_H_
