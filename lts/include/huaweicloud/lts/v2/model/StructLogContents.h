
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_StructLogContents_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_StructLogContents_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  StructLogContents
    : public ModelBase
{
public:
    StructLogContents();
    virtual ~StructLogContents();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StructLogContents members

    /// <summary>
    /// 日志原数据。
    /// </summary>

    std::string getLogContent() const;
    bool logContentIsSet() const;
    void unsetlogContent();
    void setLogContent(const std::string& value);

    /// <summary>
    /// 日志单行序列号。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);


protected:
    std::string logContent_;
    bool logContentIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_StructLogContents_H_
