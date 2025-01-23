
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_resource_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_resource_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResourceCheck_resource
    : public ModelBase
{
public:
    ResourceCheck_resource();
    virtual ~ResourceCheck_resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceCheck_resource members

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 实例数量。
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 实例部署模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 可用区类型，目前仅支持single。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// FE节点数量。
    /// </summary>

    int32_t getFeNodeNum() const;
    bool feNodeNumIsSet() const;
    void unsetfeNodeNum();
    void setFeNodeNum(int32_t value);

    /// <summary>
    /// BE节点数量。
    /// </summary>

    int32_t getBeNodeNum() const;
    bool beNodeNumIsSet() const;
    void unsetbeNodeNum();
    void setBeNodeNum(int32_t value);

    /// <summary>
    /// FE规格码。
    /// </summary>

    std::string getFeFlavorRef() const;
    bool feFlavorRefIsSet() const;
    void unsetfeFlavorRef();
    void setFeFlavorRef(const std::string& value);

    /// <summary>
    /// BE规格码。
    /// </summary>

    std::string getBeFlavorRef() const;
    bool beFlavorRefIsSet() const;
    void unsetbeFlavorRef();
    void setBeFlavorRef(const std::string& value);

    /// <summary>
    /// 可用区码。选填，校验可用区码是否正确。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// HTAP实例子网即TaurusDB实例子网。 获取方法请参见[获取子网ID](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    int32_t feNodeNum_;
    bool feNodeNumIsSet_;
    int32_t beNodeNum_;
    bool beNodeNumIsSet_;
    std::string feFlavorRef_;
    bool feFlavorRefIsSet_;
    std::string beFlavorRef_;
    bool beFlavorRefIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_resource_H_
