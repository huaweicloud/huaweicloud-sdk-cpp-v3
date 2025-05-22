
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RealTimeLogResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RealTimeLogResponseBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RealTimeLogResponseBody_result
    : public ModelBase
{
public:
    RealTimeLogResponseBody_result();
    virtual ~RealTimeLogResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeLogResponseBody_result members

    /// <summary>
    /// 是否还有剩余日志标识
    /// </summary>

    bool isHasMoreData() const;
    bool hasMoreDataIsSet() const;
    void unsethasMoreData();
    void setHasMoreData(bool value);

    /// <summary>
    /// 偏移量，可用于下一次请求
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 返回日志内容，可能会空，请再次请求
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 当前请求偏移量
    /// </summary>

    int32_t getCurrentOffset() const;
    bool currentOffsetIsSet() const;
    void unsetcurrentOffset();
    void setCurrentOffset(int32_t value);


protected:
    bool hasMoreData_;
    bool hasMoreDataIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string content_;
    bool contentIsSet_;
    int32_t currentOffset_;
    bool currentOffsetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RealTimeLogResponseBody_result_H_
