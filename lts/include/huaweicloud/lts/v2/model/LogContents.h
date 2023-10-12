
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LogContents_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LogContents_H_


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
/// 参数集
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LogContents
    : public ModelBase
{
public:
    LogContents();
    virtual ~LogContents();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogContents members

    /// <summary>
    /// 日志原数据。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 日志单行序列号。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 该条日志包含的 labels。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);


protected:
    std::string content_;
    bool contentIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LogContents_H_
