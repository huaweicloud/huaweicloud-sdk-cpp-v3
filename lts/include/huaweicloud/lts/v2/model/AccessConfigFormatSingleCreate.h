
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatSingleCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatSingleCreate_H_

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
/// 日志接入格式单行日志
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigFormatSingleCreate
    : public ModelBase
{
public:
    AccessConfigFormatSingleCreate();
    virtual ~AccessConfigFormatSingleCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AccessConfigFormatSingleCreate members

    /// <summary>
    /// 单行日志。system：系统时间，wildcard：时间通配符。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 日志时间。 当mode为”system”，则填入当前时间戳。 当mode为\&quot;wildcard\&quot;，则时间通配符：用日志打印时间来标识一条日志数据，通过时间通配符来匹配日志，每条日志的行首显示日志的打印时间；如果日志中的时间格式为：2019-01-01 23:59:59，时间通配符应该填写为：YYYY-MM-DD hh:mm:ss；如果日志中的时间格式为：19-1-1 23:59:59，时间通配符应该填写为：YY-M-D hh:mm:ss
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigFormatSingleCreate_H_
