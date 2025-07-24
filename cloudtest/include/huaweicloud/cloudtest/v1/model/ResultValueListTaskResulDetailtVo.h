
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTaskResulDetailtVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTaskResulDetailtVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskResultDetailVo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueListTaskResulDetailtVo
    : public ModelBase
{
public:
    ResultValueListTaskResulDetailtVo();
    virtual ~ResultValueListTaskResulDetailtVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueListTaskResulDetailtVo members

    /// <summary>
    /// 起始记录数 大于 实际总条数时， 值为0， 分页请求才有此值
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

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

    TaskResultDetailVo getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const TaskResultDetailVo& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    TaskResultDetailVo value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListTaskResulDetailtVo_H_
