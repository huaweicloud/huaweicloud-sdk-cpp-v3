
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Commit_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Commit_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  Commit
    : public ModelBase
{
public:
    Commit();
    virtual ~Commit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Commit members

    /// <summary>
    /// 作者邮箱
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 作者
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 作者提交时间
    /// </summary>

    utility::datetime getAuthoredDate() const;
    bool authoredDateIsSet() const;
    void unsetauthoredDate();
    void setAuthoredDate(const utility::datetime& value);

    /// <summary>
    /// 提交时间
    /// </summary>

    utility::datetime getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const utility::datetime& value);

    /// <summary>
    /// 提交作者邮箱
    /// </summary>

    std::string getCommitterEmail() const;
    bool committerEmailIsSet() const;
    void unsetcommitterEmail();
    void setCommitterEmail(const std::string& value);

    /// <summary>
    /// 提交作者
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// 文件变更的详情信息，其格式由请求查询参数 stat_format 决定
    /// </summary>

    Object getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const Object& value);

    /// <summary>
    /// 提交对应的SHA id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 提交的信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 父提交id
    /// </summary>

    std::vector<std::string>& getParentIds();
    bool parentIdsIsSet() const;
    void unsetparentIds();
    void setParentIds(const std::vector<std::string>& value);


protected:
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    utility::datetime authoredDate_;
    bool authoredDateIsSet_;
    utility::datetime committedDate_;
    bool committedDateIsSet_;
    std::string committerEmail_;
    bool committerEmailIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    Object format_;
    bool formatIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<std::string> parentIds_;
    bool parentIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_Commit_H_
