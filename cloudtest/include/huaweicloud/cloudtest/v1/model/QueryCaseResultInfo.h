
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCaseResultInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCaseResultInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryCaseResultInfo
    : public ModelBase
{
public:
    QueryCaseResultInfo();
    virtual ~QueryCaseResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCaseResultInfo members

    /// <summary>
    /// 结果URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 测试任务URI
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 执行id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序类型
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryCaseResultInfo_H_
