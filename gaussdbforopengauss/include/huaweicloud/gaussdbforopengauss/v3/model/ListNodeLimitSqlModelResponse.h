
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelResponseResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListNodeLimitSqlModelResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNodeLimitSqlModelResponse();
    virtual ~ListNodeLimitSqlModelResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNodeLimitSqlModelResponse members

    /// <summary>
    /// 限流SQL模板匹配信息
    /// </summary>

    std::vector<ListNodeLimitSqlModelResponseResult>& getNodeLimitSqlModelList();
    bool nodeLimitSqlModelListIsSet() const;
    void unsetnodeLimitSqlModelList();
    void setNodeLimitSqlModelList(const std::vector<ListNodeLimitSqlModelResponseResult>& value);

    /// <summary>
    /// 查询记录数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListNodeLimitSqlModelResponseResult> nodeLimitSqlModelList_;
    bool nodeLimitSqlModelListIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponse_H_
