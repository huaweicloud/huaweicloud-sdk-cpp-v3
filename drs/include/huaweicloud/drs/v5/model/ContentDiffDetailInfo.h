
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentDiffDetailInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentDiffDetailInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ContentDiffDetailVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 内容对比不一致数据的详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ContentDiffDetailInfo
    : public ModelBase
{
public:
    ContentDiffDetailInfo();
    virtual ~ContentDiffDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContentDiffDetailInfo members

    /// <summary>
    /// 数量。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 对比不一致详情：只有源库存在。
    /// </summary>

    int64_t getTargetMetaIsNull() const;
    bool targetMetaIsNullIsSet() const;
    void unsettargetMetaIsNull();
    void setTargetMetaIsNull(int64_t value);

    /// <summary>
    /// 对比不一致详情：只有目标库存在。
    /// </summary>

    int64_t getSourceMetaIsNull() const;
    bool sourceMetaIsNullIsSet() const;
    void unsetsourceMetaIsNull();
    void setSourceMetaIsNull(int64_t value);

    /// <summary>
    /// 对比不一致详情：源和目标端均存在。
    /// </summary>

    int64_t getSourceTargetMetaNotNull() const;
    bool sourceTargetMetaNotNullIsSet() const;
    void unsetsourceTargetMetaNotNull();
    void setSourceTargetMetaNotNull(int64_t value);

    /// <summary>
    /// 信息列表。
    /// </summary>

    std::vector<ContentDiffDetailVO>& getContentsInfos();
    bool contentsInfosIsSet() const;
    void unsetcontentsInfos();
    void setContentsInfos(const std::vector<ContentDiffDetailVO>& value);


protected:
    int64_t count_;
    bool countIsSet_;
    int64_t targetMetaIsNull_;
    bool targetMetaIsNullIsSet_;
    int64_t sourceMetaIsNull_;
    bool sourceMetaIsNullIsSet_;
    int64_t sourceTargetMetaNotNull_;
    bool sourceTargetMetaNotNullIsSet_;
    std::vector<ContentDiffDetailVO> contentsInfos_;
    bool contentsInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ContentDiffDetailInfo_H_
