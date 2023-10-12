
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 此参数在请求实体中，采用json字符串格式
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateLogDumpObsRequestBody
    : public ModelBase
{
public:
    CreateLogDumpObsRequestBody();
    virtual ~CreateLogDumpObsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLogDumpObsRequestBody members

    /// <summary>
    /// 日志组id。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流id列表, 可以指定一个或多个日志流进行obs周期性转储
    /// </summary>

    std::vector<std::string>& getLogStreamIds();
    bool logStreamIdsIsSet() const;
    void unsetlogStreamIds();
    void setLogStreamIds(const std::vector<std::string>& value);

    /// <summary>
    /// obs 桶名称。
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// 周期性转储, 必须填 cycle。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 转储格式 RAW/JSON， 默认为 RAW。
    /// </summary>

    std::string getStorageFormat() const;
    bool storageFormatIsSet() const;
    void unsetstorageFormat();
    void setStorageFormat(const std::string& value);

    /// <summary>
    /// 是否开启转储 true/false, 默认为 true
    /// </summary>

    bool isSwitchOn() const;
    bool switchOnIsSet() const;
    void unsetswitchOn();
    void setSwitchOn(bool value);

    /// <summary>
    /// 转储至OBS桶中的日志文件前缀。
    /// </summary>

    std::string getPrefixName() const;
    bool prefixNameIsSet() const;
    void unsetprefixName();
    void setPrefixName(const std::string& value);

    /// <summary>
    /// 自定义文件夹路径。
    /// </summary>

    std::string getDirPrefixName() const;
    bool dirPrefixNameIsSet() const;
    void unsetdirPrefixName();
    void setDirPrefixName(const std::string& value);

    /// <summary>
    /// 转储周期的长度， 与 period_unit 拼接后必须在该列表中 [\&quot;2min\&quot;,\&quot;5min\&quot;,\&quot;30min\&quot;,\&quot;1hour\&quot;,\&quot;3hour\&quot;,\&quot;6hour\&quot;,\&quot;12hour\&quot;]。
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);

    /// <summary>
    /// 转储周期的单位， 与 period 拼接后必须在该列表中 [\&quot;2min\&quot;,\&quot;5min\&quot;,\&quot;30min\&quot;,\&quot;1hour\&quot;,\&quot;3hour\&quot;,\&quot;6hour\&quot;,\&quot;12hour\&quot;]。
    /// </summary>

    std::string getPeriodUnit() const;
    bool periodUnitIsSet() const;
    void unsetperiodUnit();
    void setPeriodUnit(const std::string& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::vector<std::string> logStreamIds_;
    bool logStreamIdsIsSet_;
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string storageFormat_;
    bool storageFormatIsSet_;
    bool switchOn_;
    bool switchOnIsSet_;
    std::string prefixName_;
    bool prefixNameIsSet_;
    std::string dirPrefixName_;
    bool dirPrefixNameIsSet_;
    int32_t period_;
    bool periodIsSet_;
    std::string periodUnit_;
    bool periodUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateLogDumpObsRequestBody_H_
