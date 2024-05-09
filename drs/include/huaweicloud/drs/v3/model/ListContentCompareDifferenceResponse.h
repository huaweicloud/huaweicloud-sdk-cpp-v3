
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDifferenceResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDifferenceResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CompareJobContentDetailInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListContentCompareDifferenceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListContentCompareDifferenceResponse();
    virtual ~ListContentCompareDifferenceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListContentCompareDifferenceResponse members

    /// <summary>
    /// 总数量。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 对比不一致详情数量：只有源库存在。
    /// </summary>

    int64_t getTargetMetaIsNull() const;
    bool targetMetaIsNullIsSet() const;
    void unsettargetMetaIsNull();
    void setTargetMetaIsNull(int64_t value);

    /// <summary>
    /// 对比不一致详情数量：只有目标库存在。
    /// </summary>

    int64_t getSourceMetaIsNull() const;
    bool sourceMetaIsNullIsSet() const;
    void unsetsourceMetaIsNull();
    void setSourceMetaIsNull(int64_t value);

    /// <summary>
    /// 对比不一致详情数量：源和目标端均存在。
    /// </summary>

    int64_t getSourceTargetMetaNotNull() const;
    bool sourceTargetMetaNotNullIsSet() const;
    void unsetsourceTargetMetaNotNull();
    void setSourceTargetMetaNotNull(int64_t value);

    /// <summary>
    /// 详细内容信息列表。
    /// </summary>

    std::vector<CompareJobContentDetailInfo>& getContentsInfos();
    bool contentsInfosIsSet() const;
    void unsetcontentsInfos();
    void setContentsInfos(const std::vector<CompareJobContentDetailInfo>& value);


protected:
    int64_t count_;
    bool countIsSet_;
    int64_t targetMetaIsNull_;
    bool targetMetaIsNullIsSet_;
    int64_t sourceMetaIsNull_;
    bool sourceMetaIsNullIsSet_;
    int64_t sourceTargetMetaNotNull_;
    bool sourceTargetMetaNotNullIsSet_;
    std::vector<CompareJobContentDetailInfo> contentsInfos_;
    bool contentsInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListContentCompareDifferenceResponse_H_
