
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryCompareResultReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryCompareResultReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryCompareResultReq
    : public ModelBase
{
public:
    QueryCompareResultReq();
    virtual ~QueryCompareResultReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryCompareResultReq members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 请求查询结果的对象级对比任务id。
    /// </summary>

    std::string getObjectLevelCompareId() const;
    bool objectLevelCompareIdIsSet() const;
    void unsetobjectLevelCompareId();
    void setObjectLevelCompareId(const std::string& value);

    /// <summary>
    /// 请求查询结果的行对比任务id。
    /// </summary>

    std::string getLineCompareId() const;
    bool lineCompareIdIsSet() const;
    void unsetlineCompareId();
    void setLineCompareId(const std::string& value);

    /// <summary>
    /// 请求查询结果的内容对比任务id。
    /// </summary>

    std::string getContentCompareId() const;
    bool contentCompareIdIsSet() const;
    void unsetcontentCompareId();
    void setContentCompareId(const std::string& value);

    /// <summary>
    /// 分页查询的当前页码，对查询对比任务的结果生效。
    /// </summary>

    int32_t getCurrentPage() const;
    bool currentPageIsSet() const;
    void unsetcurrentPage();
    void setCurrentPage(int32_t value);

    /// <summary>
    /// 分页查询的每页个数，对查询对比任务的结果生效。
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string objectLevelCompareId_;
    bool objectLevelCompareIdIsSet_;
    std::string lineCompareId_;
    bool lineCompareIdIsSet_;
    std::string contentCompareId_;
    bool contentCompareIdIsSet_;
    int32_t currentPage_;
    bool currentPageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryCompareResultReq_H_
