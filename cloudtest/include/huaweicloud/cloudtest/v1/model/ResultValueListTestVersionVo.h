
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTestVersionVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTestVersionVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/TestVersionVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueListTestVersionVo
    : public ModelBase
{
public:
    ResultValueListTestVersionVo();
    virtual ~ResultValueListTestVersionVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueListTestVersionVo members

    /// <summary>
    /// 起始记录数 大于 实际总条数时， 值为0， 分页请求才有此值
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 实际的数据类型：单个对象，集合 或 NULL
    /// </summary>

    std::vector<TestVersionVo>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<TestVersionVo>& value);

    /// <summary>
    /// 业务失败的提示内容，对内接口才有此值
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsethasMore();
    void setHasMore(bool value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TestVersionVo> value_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTestVersionVo_H_
