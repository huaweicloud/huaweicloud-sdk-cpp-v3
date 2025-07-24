
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTestCasesByIssueInfo
    : public ModelBase
{
public:
    QueryTestCasesByIssueInfo();
    virtual ~QueryTestCasesByIssueInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTestCasesByIssueInfo members

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

    /// <summary>
    /// 版本uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 关联关系类型
    /// </summary>

    std::string getRelateType() const;
    bool relateTypeIsSet() const;
    void unsetrelateType();
    void setRelateType(const std::string& value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 用例等级ID集合
    /// </summary>

    std::vector<std::string>& getRankIds();
    bool rankIdsIsSet() const;
    void unsetrankIds();
    void setRankIds(const std::vector<std::string>& value);

    /// <summary>
    /// 结果Code集合
    /// </summary>

    std::vector<std::string>& getResultCodes();
    bool resultCodesIsSet() const;
    void unsetresultCodes();
    void setResultCodes(const std::vector<std::string>& value);


protected:
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string relateType_;
    bool relateTypeIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::vector<std::string> rankIds_;
    bool rankIdsIsSet_;
    std::vector<std::string> resultCodes_;
    bool resultCodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestCasesByIssueInfo_H_
