
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseResp_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 基础响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BaseResp
    : public ModelBase
{
public:
    BaseResp();
    virtual ~BaseResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BaseResp members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BaseResp_H_
