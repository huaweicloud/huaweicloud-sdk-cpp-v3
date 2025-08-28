
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentParam_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentParam_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改文档分段参数。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DocumentSegmentParam
    : public ModelBase
{
public:
    DocumentSegmentParam();
    virtual ~DocumentSegmentParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DocumentSegmentParam members

    /// <summary>
    /// 分段类型 * 1: 自动分段 * 2: 手动分段
    /// </summary>

    int32_t getSplitType() const;
    bool splitTypeIsSet() const;
    void unsetsplitType();
    void setSplitType(int32_t value);

    /// <summary>
    /// 分段长度。
    /// </summary>

    int32_t getChunkSize() const;
    bool chunkSizeIsSet() const;
    void unsetchunkSize();
    void setChunkSize(int32_t value);

    /// <summary>
    /// 分段策略，多个策略之间用逗号分割。 &gt; title:标题分割；separator:分隔符分割
    /// </summary>

    std::string getChunkType() const;
    bool chunkTypeIsSet() const;
    void unsetchunkType();
    void setChunkType(const std::string& value);

    /// <summary>
    /// 分隔符
    /// </summary>

    std::vector<std::string>& getSeparators();
    bool separatorsIsSet() const;
    void unsetseparators();
    void setSeparators(const std::vector<std::string>& value);


protected:
    int32_t splitType_;
    bool splitTypeIsSet_;
    int32_t chunkSize_;
    bool chunkSizeIsSet_;
    std::string chunkType_;
    bool chunkTypeIsSet_;
    std::vector<std::string> separators_;
    bool separatorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DocumentSegmentParam_H_
