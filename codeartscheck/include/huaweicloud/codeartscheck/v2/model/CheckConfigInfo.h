
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckConfigInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckConfigInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CheckConfigInfo
    : public ModelBase
{
public:
    CheckConfigInfo();
    virtual ~CheckConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckConfigInfo members

    /// <summary>
    /// 检查参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 检查参数对应的key值
    /// </summary>

    std::string getCfgKey() const;
    bool cfgKeyIsSet() const;
    void unsetcfgKey();
    void setCfgKey(const std::string& value);

    /// <summary>
    /// 检查参数默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 检查参数可选项
    /// </summary>

    std::string getOptionValue() const;
    bool optionValueIsSet() const;
    void unsetoptionValue();
    void setOptionValue(const std::string& value);

    /// <summary>
    /// 0：非必填，1：必填
    /// </summary>

    int32_t getIsRequired() const;
    bool isRequiredIsSet() const;
    void unsetisRequired();
    void setIsRequired(int32_t value);

    /// <summary>
    /// 检查参数说明
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数类型，0：文本，2：有可选项
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 参数状态，on：启用，off：未启用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 检查参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string cfgKey_;
    bool cfgKeyIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string optionValue_;
    bool optionValueIsSet_;
    int32_t isRequired_;
    bool isRequiredIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckConfigInfo_H_
