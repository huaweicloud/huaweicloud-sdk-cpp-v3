
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryProjectIssuesRelationTestCasesInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryProjectIssuesRelationTestCasesInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询项目下关联了需求的用例列表请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryProjectIssuesRelationTestCasesInfo
    : public ModelBase
{
public:
    QueryProjectIssuesRelationTestCasesInfo();
    virtual ~QueryProjectIssuesRelationTestCasesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryProjectIssuesRelationTestCasesInfo members

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryProjectIssuesRelationTestCasesInfo_H_
