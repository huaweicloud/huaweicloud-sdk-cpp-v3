
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ParameterInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ParameterInfo_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群配置信息详情
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ParameterInfo
    : public ModelBase
{
public:
    ParameterInfo();
    virtual ~ParameterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParameterInfo members

    /// <summary>
    /// 参数ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 配置名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 配置值类型
    /// </summary>

    std::string getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(const std::string& value);

    /// <summary>
    /// 集群当前运行的配置值
    /// </summary>

    std::string getRunningValue() const;
    bool runningValueIsSet() const;
    void unsetrunningValue();
    void setRunningValue(const std::string& value);

    /// <summary>
    /// 单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// 是否需要重启生效
    /// </summary>

    bool isReboot() const;
    bool rebootIsSet() const;
    void unsetreboot();
    void setReboot(bool value);

    /// <summary>
    /// 配置值取值范围
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 配置描述信息
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
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string valueType_;
    bool valueTypeIsSet_;
    std::string runningValue_;
    bool runningValueIsSet_;
    std::string unit_;
    bool unitIsSet_;
    bool reboot_;
    bool rebootIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ParameterInfo_H_
