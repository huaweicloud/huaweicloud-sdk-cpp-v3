
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// metadata字段数据结构说明
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ConfigurationMetadata
    : public ModelBase
{
public:
    ConfigurationMetadata();
    virtual ~ConfigurationMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationMetadata members

    /// <summary>
    /// Configuration名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// Configuration标签，key/value对格式。  - Key：必须以字母或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀，例如example.com/my-key，DNS子域最长253个字符。 - Value：可以为空或者非空字符串，非空字符串必须以字符或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符。  示例：\&quot;foo\&quot;: \&quot;bar\&quot; 
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationMetadata_H_
