
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitV2_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitV2_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CommitV2
    : public ModelBase
{
public:
    CommitV2();
    virtual ~CommitV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitV2 members

    /// <summary>
    /// 提交时间
    /// </summary>

    std::string getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const std::string& value);

    /// <summary>
    /// 提交者
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// 提交id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 提交短id
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 提交标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);


protected:
    std::string committedDate_;
    bool committedDateIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string title_;
    bool titleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CommitV2_H_
