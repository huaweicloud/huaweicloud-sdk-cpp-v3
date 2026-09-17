
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesListQueryInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesListQueryInfo_H_


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
/// 用例列表查询Body参数
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCasesListQueryInfo
    : public ModelBase
{
public:
    TestCasesListQueryInfo();
    virtual ~TestCasesListQueryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCasesListQueryInfo members

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 用例URI集合
    /// </summary>

    std::vector<std::string>& getCaseUris();
    bool caseUrisIsSet() const;
    void unsetcaseUris();
    void setCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 处理者ID集合
    /// </summary>

    std::vector<std::string>& getOwnerIds();
    bool ownerIdsIsSet() const;
    void unsetownerIds();
    void setOwnerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 状态Code集合
    /// </summary>

    std::vector<std::string>& getStatusCodes();
    bool statusCodesIsSet() const;
    void unsetstatusCodes();
    void setStatusCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 用例等级ID集合
    /// </summary>

    std::vector<std::string>& getRankIds();
    bool rankIdsIsSet() const;
    void unsetrankIds();
    void setRankIds(const std::vector<std::string>& value);

    /// <summary>
    /// 模块ID集合
    /// </summary>

    std::vector<std::string>& getModuleIds();
    bool moduleIdsIsSet() const;
    void unsetmoduleIds();
    void setModuleIds(const std::vector<std::string>& value);

    /// <summary>
    /// 关键字查询，用例名或编号
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序方式
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

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
    /// 服务类型
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 阶段过程（2：测试设计，3：测试执行，4：质量报告）
    /// </summary>

    int32_t getStageType() const;
    bool stageTypeIsSet() const;
    void unsetstageType();
    void setStageType(int32_t value);

    /// <summary>
    /// 目录URI
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);


protected:
    std::string versionUri_;
    bool versionUriIsSet_;
    std::vector<std::string> caseUris_;
    bool caseUrisIsSet_;
    std::vector<std::string> ownerIds_;
    bool ownerIdsIsSet_;
    std::vector<std::string> statusCodes_;
    bool statusCodesIsSet_;
    std::vector<std::string> rankIds_;
    bool rankIdsIsSet_;
    std::vector<std::string> moduleIds_;
    bool moduleIdsIsSet_;
    std::string keyword_;
    bool keywordIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    int32_t stageType_;
    bool stageTypeIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasesListQueryInfo_H_
