
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTaskResultsDetailRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTaskResultsDetailRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTaskResultsDetailRequest
    : public ModelBase
{
public:
    ListTaskResultsDetailRequest();
    virtual ~ListTaskResultsDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTaskResultsDetailRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 任务URI
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 测试任务结果uri
    /// </summary>

    std::string getResultUri() const;
    bool resultUriIsSet() const;
    void unsetresultUri();
    void setResultUri(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    std::string getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(const std::string& value);

    /// <summary>
    /// 每页多少记录
    /// </summary>

    std::string getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(const std::string& value);

    /// <summary>
    /// 结果过滤条件
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string resultUri_;
    bool resultUriIsSet_;
    std::string pageNo_;
    bool pageNoIsSet_;
    std::string pageSize_;
    bool pageSizeIsSet_;
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTaskResultsDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListTaskResultsDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTaskResultsDetailRequest_H_
