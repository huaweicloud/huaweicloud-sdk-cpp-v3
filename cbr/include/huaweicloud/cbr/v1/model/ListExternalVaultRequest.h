
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListExternalVaultRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListExternalVaultRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListExternalVaultRequest
    : public ModelBase
{
public:
    ListExternalVaultRequest();
    virtual ~ListExternalVaultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListExternalVaultRequest members

    /// <summary>
    /// 其他区域的项目ID
    /// </summary>

    std::string getExternalProjectId() const;
    bool externalProjectIdIsSet() const;
    void unsetexternalProjectId();
    void setExternalProjectId(const std::string& value);

    /// <summary>
    /// 每页显示条目数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移值
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// [保护类型。取值为backup，replication和hybrid。](tag:hws,hws_hk) [保护类型。取值为backup和replication。](tag:ocb) [保护类型。取值为backup。](tag:g42,hk-g42,sbc,dt,fcs_vm,ctc,tm,tlf,cmcc,hcso_dt)
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getObjcetType() const;
    bool objcetTypeIsSet() const;
    void unsetobjcetType();
    void setObjcetType(const std::string& value);

    /// <summary>
    /// [云类型。取值为public和hybrid。](tag:hws,hws_hk) [云类型。取值为public。](tag:g42,hk-g42,sbc,dt,fcs_vm,ctc,ocb,tm,tlf,cmcc,hcso_dt)
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 存储库ID，指定存储ID时其他过滤条件不生效。
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string externalProjectId_;
    bool externalProjectIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string protectType_;
    bool protectTypeIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string objcetType_;
    bool objcetTypeIsSet_;
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListExternalVaultRequest& dereference_from_shared_ptr(std::shared_ptr<ListExternalVaultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListExternalVaultRequest_H_
