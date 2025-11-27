
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchCreateUpdateApiTestCaseVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchCreateUpdateApiTestCaseVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestCaseVo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/TestCaseInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchCreateUpdateApiTestCaseVo
    : public ModelBase
{
public:
    BatchCreateUpdateApiTestCaseVo();
    virtual ~BatchCreateUpdateApiTestCaseVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateUpdateApiTestCaseVo members

    /// <summary>
    /// 资源URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    int32_t getRank() const;
    bool rankIsSet() const;
    void unsetrank();
    void setRank(int32_t value);

    /// <summary>
    /// 最后修改人
    /// </summary>

    std::string getLastModifier() const;
    bool lastModifierIsSet() const;
    void unsetlastModifier();
    void setLastModifier(const std::string& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    utility::datetime getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const utility::datetime& value);

    /// <summary>
    /// 修改时间时间戳
    /// </summary>

    int64_t getLastModifiedTimestamp() const;
    bool lastModifiedTimestampIsSet() const;
    void unsetlastModifiedTimestamp();
    void setLastModifiedTimestamp(int64_t value);

    /// <summary>
    /// 最后变更时间
    /// </summary>

    utility::datetime getLastChangeTime() const;
    bool lastChangeTimeIsSet() const;
    void unsetlastChangeTime();
    void setLastChangeTime(const utility::datetime& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 源资源URI
    /// </summary>

    std::string getOriginUri() const;
    bool originUriIsSet() const;
    void unsetoriginUri();
    void setOriginUri(const std::string& value);

    /// <summary>
    /// 父资源URI
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 父资源路径
    /// </summary>

    std::string getParentPath() const;
    bool parentPathIsSet() const;
    void unsetparentPath();
    void setParentPath(const std::string& value);

    /// <summary>
    /// 创建版本URI
    /// </summary>

    std::string getCreationVersionUri() const;
    bool creationVersionUriIsSet() const;
    void unsetcreationVersionUri();
    void setCreationVersionUri(const std::string& value);

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

    int64_t getCreationDateTimestamp() const;
    bool creationDateTimestampIsSet() const;
    void unsetcreationDateTimestamp();
    void setCreationDateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 创建成功的用例列表
    /// </summary>

    std::vector<TestCaseVo>& getSuccessList();
    bool successListIsSet() const;
    void unsetsuccessList();
    void setSuccessList(const std::vector<TestCaseVo>& value);

    /// <summary>
    /// 创建失败的用例列表
    /// </summary>

    std::vector<TestCaseInfo>& getFailedList();
    bool failedListIsSet() const;
    void unsetfailedList();
    void setFailedList(const std::vector<TestCaseInfo>& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string author_;
    bool authorIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t rank_;
    bool rankIsSet_;
    std::string lastModifier_;
    bool lastModifierIsSet_;
    utility::datetime lastModified_;
    bool lastModifiedIsSet_;
    int64_t lastModifiedTimestamp_;
    bool lastModifiedTimestampIsSet_;
    utility::datetime lastChangeTime_;
    bool lastChangeTimeIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string originUri_;
    bool originUriIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string parentPath_;
    bool parentPathIsSet_;
    std::string creationVersionUri_;
    bool creationVersionUriIsSet_;
    utility::datetime creationDate_;
    bool creationDateIsSet_;
    int64_t creationDateTimestamp_;
    bool creationDateTimestampIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::vector<TestCaseVo> successList_;
    bool successListIsSet_;
    std::vector<TestCaseInfo> failedList_;
    bool failedListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchCreateUpdateApiTestCaseVo_H_
