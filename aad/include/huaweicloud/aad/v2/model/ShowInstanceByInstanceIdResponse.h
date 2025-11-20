
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowInstanceByInstanceIdResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowInstanceByInstanceIdResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/ProductSpecData.h>
#include <string>
#include <huaweicloud/aad/v2/model/InstanceConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowInstanceByInstanceIdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceByInstanceIdResponse();
    virtual ~ShowInstanceByInstanceIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceByInstanceIdResponse members

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    int32_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int32_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int32_t value);

    /// <summary>
    /// 当前时间
    /// </summary>

    int32_t getCurrentTime() const;
    bool currentTimeIsSet() const;
    void unsetcurrentTime();
    void setCurrentTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProductSpecData getProductSpecData() const;
    bool productSpecDataIsSet() const;
    void unsetproductSpecData();
    void setProductSpecData(const ProductSpecData& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceConfig getInstanceConfig() const;
    bool instanceConfigIsSet() const;
    void unsetinstanceConfig();
    void setInstanceConfig(const InstanceConfig& value);

    /// <summary>
    /// 弹性业务带宽是否可更新
    /// </summary>

    bool isElasticServiceBwUpdateEnable() const;
    bool elasticServiceBwUpdateEnableIsSet() const;
    void unsetelasticServiceBwUpdateEnable();
    void setElasticServiceBwUpdateEnable(bool value);


protected:
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string version_;
    bool versionIsSet_;
    int32_t expireTime_;
    bool expireTimeIsSet_;
    int32_t createTime_;
    bool createTimeIsSet_;
    int32_t currentTime_;
    bool currentTimeIsSet_;
    ProductSpecData productSpecData_;
    bool productSpecDataIsSet_;
    InstanceConfig instanceConfig_;
    bool instanceConfigIsSet_;
    bool elasticServiceBwUpdateEnable_;
    bool elasticServiceBwUpdateEnableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowInstanceByInstanceIdResponse_H_
