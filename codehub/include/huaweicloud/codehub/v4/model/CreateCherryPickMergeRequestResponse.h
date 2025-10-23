
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCherryPickMergeRequestResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCherryPickMergeRequestResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateCherryPickMergeRequestResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateCherryPickMergeRequestResponse();
    virtual ~CreateCherryPickMergeRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCherryPickMergeRequestResponse members

    /// <summary>
    /// CherryPick结果
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// CherryPick标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// CherryPick临时分支名名称
    /// </summary>

    std::string getCherryPickBranchName() const;
    bool cherryPickBranchNameIsSet() const;
    void unsetcherryPickBranchName();
    void setCherryPickBranchName(const std::string& value);


protected:
    std::string state_;
    bool stateIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string cherryPickBranchName_;
    bool cherryPickBranchNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCherryPickMergeRequestResponse_H_
