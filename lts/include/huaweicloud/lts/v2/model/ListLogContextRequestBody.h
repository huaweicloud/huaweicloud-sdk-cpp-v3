
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 查询上下文日志请求体。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListLogContextRequestBody
    : public ModelBase
{
public:
    ListLogContextRequestBody();
    virtual ~ListLogContextRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogContextRequestBody members

    /// <summary>
    /// 日志单行序列号，字段值需要从日志结果中获取，纳秒级时间戳。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// 自定义时间特性时间字段，字段值需要从日志结果中获取，毫秒级时间戳。若已开启云端结构化自定义时间功能，需要使用该字段和line_num字段共同进行上下文查询。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 指定起始日志往前（上文）的日志条数，取值范围 [0, 500] ，默认值100
    /// </summary>

    int32_t getBackwardsSize() const;
    bool backwardsSizeIsSet() const;
    void unsetbackwardsSize();
    void setBackwardsSize(int32_t value);

    /// <summary>
    /// 指定起始日志往后（下文）的日志条数，取值范围 [0, 500] ，默认值100
    /// </summary>

    int32_t getForwardsSize() const;
    bool forwardsSizeIsSet() const;
    void unsetforwardsSize();
    void setForwardsSize(int32_t value);


protected:
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string time_;
    bool timeIsSet_;
    int32_t backwardsSize_;
    bool backwardsSizeIsSet_;
    int32_t forwardsSize_;
    bool forwardsSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListLogContextRequestBody_H_
