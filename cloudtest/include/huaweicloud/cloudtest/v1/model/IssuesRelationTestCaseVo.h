
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesRelationTestCaseVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesRelationTestCaseVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssuesRelationTestCaseVo
    : public ModelBase
{
public:
    IssuesRelationTestCaseVo();
    virtual ~IssuesRelationTestCaseVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssuesRelationTestCaseVo members

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getDrRelationId() const;
    bool drRelationIdIsSet() const;
    void unsetdrRelationId();
    void setDrRelationId(const std::string& value);

    /// <summary>
    /// 状态ID
    /// </summary>

    std::string getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getStatusName() const;
    bool statusNameIsSet() const;
    void unsetstatusName();
    void setStatusName(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(const std::string& value);

    /// <summary>
    /// 处理人名称
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string drRelationId_;
    bool drRelationIdIsSet_;
    std::string statusCode_;
    bool statusCodeIsSet_;
    std::string statusName_;
    bool statusNameIsSet_;
    std::string author_;
    bool authorIsSet_;
    std::string authorId_;
    bool authorIdIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssuesRelationTestCaseVo_H_
