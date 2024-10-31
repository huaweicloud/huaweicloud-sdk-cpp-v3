
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Detail_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Detail_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Detail
    : public ModelBase
{
public:
    Detail();
    virtual ~Detail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Detail members

    /// <summary>
    /// 自定义时间key字段名称
    /// </summary>

    std::string getSourceKey() const;
    bool sourceKeyIsSet() const;
    void unsetsourceKey();
    void setSourceKey(const std::string& value);

    /// <summary>
    /// 正则解析正则表达式 单行完全正则，多行完全正则需填此字段
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);

    /// <summary>
    /// 字段名称列表 与field_name字段保持一致
    /// </summary>

    std::vector<std::string>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 首行正则表达式
    /// </summary>

    std::string getMultiLineRegex() const;
    bool multiLineRegexIsSet() const;
    void unsetmultiLineRegex();
    void setMultiLineRegex(const std::string& value);

    /// <summary>
    /// 是否上传原始日志
    /// </summary>

    bool isKeepSource() const;
    bool keepSourceIsSet() const;
    void unsetkeepSource();
    void setKeepSource(bool value);

    /// <summary>
    /// 是否上传解析失败日志
    /// </summary>

    bool isKeepSourceIfParseError() const;
    bool keepSourceIfParseErrorIsSet() const;
    void unsetkeepSourceIfParseError();
    void setKeepSourceIfParseError(bool value);

    /// <summary>
    /// 分隔符 自定义字符最大长度10，自定义字符串最大长度30
    /// </summary>

    std::string getSplitSep() const;
    bool splitSepIsSet() const;
    void unsetsplitSep();
    void setSplitSep(const std::string& value);

    /// <summary>
    /// 分隔符类型：char-自定义字符；special_char-不可见字符；string-自定义字符串
    /// </summary>

    std::string getSplitType() const;
    bool splitTypeIsSet() const;
    void unsetsplitType();
    void setSplitType(const std::string& value);

    /// <summary>
    /// 添加的字段列表：&lt;字段名称 : 字段内容&gt;
    /// </summary>

    std::map<std::string, std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 删除的字段列表
    /// </summary>

    std::vector<std::string>& getDropKeys();
    bool dropKeysIsSet() const;
    void unsetdropKeys();
    void setDropKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 字段重命名源字段名称列表
    /// </summary>

    std::vector<std::string>& getSourceKeys();
    bool sourceKeysIsSet() const;
    void unsetsourceKeys();
    void setSourceKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 字段重命名替换的字段名称列表
    /// </summary>

    std::vector<std::string>& getDestKeys();
    bool destKeysIsSet() const;
    void unsetdestKeys();
    void setDestKeys(const std::vector<std::string>& value);

    /// <summary>
    /// json解析深度，默认为1层最大4层
    /// </summary>

    int32_t getExpandDepth() const;
    bool expandDepthIsSet() const;
    void unsetexpandDepth();
    void setExpandDepth(int32_t value);

    /// <summary>
    /// json解析字段名称连接符
    /// </summary>

    std::string getExpandConnector() const;
    bool expandConnectorIsSet() const;
    void unsetexpandConnector();
    void setExpandConnector(const std::string& value);

    /// <summary>
    /// 自定义时间时间格式
    /// </summary>

    std::string getSourceFormat() const;
    bool sourceFormatIsSet() const;
    void unsetsourceFormat();
    void setSourceFormat(const std::string& value);

    /// <summary>
    /// 自定义时间字段value
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// 是否开启自定义时间的开关
    /// </summary>

    bool isSetTime() const;
    bool setTimeIsSet() const;
    void unsetsetTime();
    void setSetTime(bool value);

    /// <summary>
    /// 日志过滤白名单规则 key长度最大为256，value最大长度为128，key不可以重复
    /// </summary>

    std::map<std::string, std::string>& getInclude();
    bool includeIsSet() const;
    void unsetinclude();
    void setInclude(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 日志过滤白名单规则 key长度最大为256，value最大长度为128，key不可以重复
    /// </summary>

    std::map<std::string, std::string>& getExclude();
    bool excludeIsSet() const;
    void unsetexclude();
    void setExclude(const std::map<std::string, std::string>& value);


protected:
    std::string sourceKey_;
    bool sourceKeyIsSet_;
    std::string regex_;
    bool regexIsSet_;
    std::vector<std::string> keys_;
    bool keysIsSet_;
    std::string multiLineRegex_;
    bool multiLineRegexIsSet_;
    bool keepSource_;
    bool keepSourceIsSet_;
    bool keepSourceIfParseError_;
    bool keepSourceIfParseErrorIsSet_;
    std::string splitSep_;
    bool splitSepIsSet_;
    std::string splitType_;
    bool splitTypeIsSet_;
    std::map<std::string, std::string> fields_;
    bool fieldsIsSet_;
    std::vector<std::string> dropKeys_;
    bool dropKeysIsSet_;
    std::vector<std::string> sourceKeys_;
    bool sourceKeysIsSet_;
    std::vector<std::string> destKeys_;
    bool destKeysIsSet_;
    int32_t expandDepth_;
    bool expandDepthIsSet_;
    std::string expandConnector_;
    bool expandConnectorIsSet_;
    std::string sourceFormat_;
    bool sourceFormatIsSet_;
    std::string sourceValue_;
    bool sourceValueIsSet_;
    bool setTime_;
    bool setTimeIsSet_;
    std::map<std::string, std::string> include_;
    bool includeIsSet_;
    std::map<std::string, std::string> exclude_;
    bool excludeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Detail_H_
