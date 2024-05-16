
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance_pay_info.h>
#include <huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance_engine.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/SrCreateInstanceRsp_instance_tags_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SrCreateInstanceRsp_instance
    : public ModelBase
{
public:
    SrCreateInstanceRsp_instance();
    virtual ~SrCreateInstanceRsp_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SrCreateInstanceRsp_instance members

    /// <summary>
    /// StarRocks实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 可用区码。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 可用区模式。  取值范围：  single：单可用区。  multi：多可用区。
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SrCreateInstanceRsp_instance_engine getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const SrCreateInstanceRsp_instance_engine& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 安全组ID。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubNetId() const;
    bool subNetIdIsSet() const;
    void unsetsubNetId();
    void setSubNetId(const std::string& value);

    /// <summary>
    /// 数据库用户。默认root。
    /// </summary>

    std::string getDbUser() const;
    bool dbUserIsSet() const;
    void unsetdbUser();
    void setDbUser(const std::string& value);

    /// <summary>
    /// 数据库端口号。默认3306。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 部署模式。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SrCreateInstanceRsp_instance_pay_info getPayInfo() const;
    bool payInfoIsSet() const;
    void unsetpayInfo();
    void setPayInfo(const SrCreateInstanceRsp_instance_pay_info& value);

    /// <summary>
    /// SSL开关。
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);

    /// <summary>
    /// 实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例所在区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SrCreateInstanceRsp_instance_tags_info getTagsInfo() const;
    bool tagsInfoIsSet() const;
    void unsettagsInfo();
    void setTagsInfo(const SrCreateInstanceRsp_instance_tags_info& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    std::string name_;
    bool nameIsSet_;
    SrCreateInstanceRsp_instance_engine engine_;
    bool engineIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string subNetId_;
    bool subNetIdIsSet_;
    std::string dbUser_;
    bool dbUserIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    SrCreateInstanceRsp_instance_pay_info payInfo_;
    bool payInfoIsSet_;
    bool enableSsl_;
    bool enableSslIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string region_;
    bool regionIsSet_;
    SrCreateInstanceRsp_instance_tags_info tagsInfo_;
    bool tagsInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrCreateInstanceRsp_instance_H_
