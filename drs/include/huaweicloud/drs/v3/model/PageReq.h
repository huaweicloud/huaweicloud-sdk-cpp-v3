
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PageReq
    : public ModelBase
{
public:
    PageReq();
    virtual ~PageReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageReq members

    /// <summary>
    /// 当前页, 不能超过item除每页任务数量的最大页 
    /// </summary>

    int32_t getCurPage() const;
    bool curPageIsSet() const;
    void unsetcurPage();
    void setCurPage(int32_t value);

    /// <summary>
    /// 每页item数量，填0获取全部item
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    int32_t curPage_;
    bool curPageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_
