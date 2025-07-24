
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueExecuteTaskVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueExecuteTaskVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ExecuteTaskVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求的返回的数据对象
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueExecuteTaskVo
    : public ModelBase
{
public:
    ResultValueExecuteTaskVo();
    virtual ~ResultValueExecuteTaskVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueExecuteTaskVo members

    /// <summary>
    /// 起始记录数 大于 实际总条数时， 值为0， 分页请求才有此值
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteTaskVo getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const ExecuteTaskVo& value);

    /// <summary>
    /// 业务失败的提示内容
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 每页展示条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 是否有更多
    /// </summary>

    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsethasMore();
    void setHasMore(bool value);


protected:
    int32_t total_;
    bool totalIsSet_;
    ExecuteTaskVo value_;
    bool valueIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    bool hasMore_;
    bool hasMoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueExecuteTaskVo_H_
