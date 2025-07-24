
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseHistoryVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseHistoryVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ResourceChangeExternalVo.h>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalTestCaseHistoryVo
    : public ModelBase
{
public:
    ExternalTestCaseHistoryVo();
    virtual ~ExternalTestCaseHistoryVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalTestCaseHistoryVo members

    /// <summary>
    /// 资源历史记录创建人ID
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 逻辑region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 历史记录字段变更列表
    /// </summary>

    std::vector<ResourceChangeExternalVo>& getChanges();
    bool changesIsSet() const;
    void unsetchanges();
    void setChanges(const std::vector<ResourceChangeExternalVo>& value);

    /// <summary>
    /// 历史记录id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const utility::datetime& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreateDateTimestamp() const;
    bool createDateTimestampIsSet() const;
    void unsetcreateDateTimestamp();
    void setCreateDateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string author_;
    bool authorIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::vector<ResourceChangeExternalVo> changes_;
    bool changesIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    utility::datetime creationDate_;
    bool creationDateIsSet_;
    int64_t createDateTimestamp_;
    bool createDateTimestampIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseHistoryVo_H_
