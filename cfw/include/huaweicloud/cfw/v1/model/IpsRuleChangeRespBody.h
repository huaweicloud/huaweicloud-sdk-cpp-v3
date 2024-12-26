
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeRespBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeRespBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsRuleChangeRespBody
    : public ModelBase
{
public:
    IpsRuleChangeRespBody();
    virtual ~IpsRuleChangeRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsRuleChangeRespBody members

    /// <summary>
    /// 错误代码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 防火墙id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// ips的id列表
    /// </summary>

    std::vector<std::string>& getIpsIds();
    bool ipsIdsIsSet() const;
    void unsetipsIds();
    void setIpsIds(const std::vector<std::string>& value);

    /// <summary>
    /// 修改结果
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> ipsIds_;
    bool ipsIdsIsSet_;
    bool result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsRuleChangeRespBody_H_
