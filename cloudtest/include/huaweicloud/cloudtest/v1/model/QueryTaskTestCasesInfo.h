
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesInfo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTaskTestCasesInfo
    : public ModelBase
{
public:
    QueryTaskTestCasesInfo();
    virtual ~QueryTaskTestCasesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTaskTestCasesInfo members

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
    /// 起始位
    /// </summary>

    int32_t getStartIndex() const;
    bool startIndexIsSet() const;
    void unsetstartIndex();
    void setStartIndex(int32_t value);

    /// <summary>
    /// 结束位
    /// </summary>

    int32_t getEndIndex() const;
    bool endIndexIsSet() const;
    void unsetendIndex();
    void setEndIndex(int32_t value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 用例uri列表
    /// </summary>

    std::vector<std::string>& getTestCaseUris();
    bool testCaseUrisIsSet() const;
    void unsettestCaseUris();
    void setTestCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 测试计划uri
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);


protected:
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t startIndex_;
    bool startIndexIsSet_;
    int32_t endIndex_;
    bool endIndexIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::vector<std::string> testCaseUris_;
    bool testCaseUrisIsSet_;
    std::string iteratorUri_;
    bool iteratorUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesInfo_H_
