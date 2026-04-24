
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionDetailResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ChargeInfoVo.h>
#include <huaweicloud/drs/v5/model/SubscriptionDataType.h>
#include <huaweicloud/drs/v5/model/SubscriptionEndpointInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowSubscriptionDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSubscriptionDetailResponse();
    virtual ~ShowSubscriptionDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSubscriptionDetailResponse members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称 约束：任务名称在4位到50位之间，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。 - 最小长度：4 - 最大长度：50
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 内网ip
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 任务状态，取值： CONFIGURATION：配置中 CREATING：创建中 CREATE_FAILED：创建失败 STARTJOBING：启动中 STARTJOB_FAILED：任务启动失败 SUBSCRIPTION_STARTED：正常 SUBSCRIPTION_FAILED：异常 DELETED：已删除 FROZEN：冻结状态 REBUILD_NODE_STARTED：订阅任务恢复中 REBUILD_NODE_FAILED：订阅任务恢复失败 NODE_UPGRADE_START：升级开始 NODE_UPGRADE_COMPLETE：升级完成 NODE_UPGRADE_FAILED：升级失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionDataType getSubscriptionDataType() const;
    bool subscriptionDataTypeIsSet() const;
    void unsetsubscriptionDataType();
    void setSubscriptionDataType(const SubscriptionDataType& value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionEndpointInfo getSourceEndpoint() const;
    bool sourceEndpointIsSet() const;
    void unsetsourceEndpoint();
    void setSourceEndpoint(const SubscriptionEndpointInfo& value);

    /// <summary>
    /// 创建时间，以时间戳表示
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 开始时间，以时间戳表示
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 当前时间，以时间戳表示
    /// </summary>

    std::string getNowTime() const;
    bool nowTimeIsSet() const;
    void unsetnowTime();
    void setNowTime(const std::string& value);

    /// <summary>
    /// 链路类型，当前仅支持“mysql”
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfoVo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfoVo& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    SubscriptionDataType subscriptionDataType_;
    bool subscriptionDataTypeIsSet_;
    SubscriptionEndpointInfo sourceEndpoint_;
    bool sourceEndpointIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string nowTime_;
    bool nowTimeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    ChargeInfoVo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string description_;
    bool descriptionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowSubscriptionDetailResponse_H_
