
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SensitiveMaskResponse_rules_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SensitiveMaskResponse_rules_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SensitiveMaskResponse_rules
    : public ModelBase
{
public:
    SensitiveMaskResponse_rules();
    virtual ~SensitiveMaskResponse_rules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SensitiveMaskResponse_rules members

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 规则类型 - BUILD_IN：系统内置 - USER_DEFINE：自定义
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 规则正则表达式
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);

    /// <summary>
    /// 替换值
    /// </summary>

    std::string getMaskValue() const;
    bool maskValueIsSet() const;
    void unsetmaskValue();
    void setMaskValue(const std::string& value);

    /// <summary>
    /// 规则状态 - ON：启用 - OFF：禁用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 操作时间
    /// </summary>

    std::string getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string regex_;
    bool regexIsSet_;
    std::string maskValue_;
    bool maskValueIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string operateTime_;
    bool operateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SensitiveMaskResponse_rules_H_
