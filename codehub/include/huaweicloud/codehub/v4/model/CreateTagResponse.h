
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateTagResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateTagResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/CommitDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateTagResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTagResponse();
    virtual ~CreateTagResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagResponse members

    /// <summary>
    /// 标签名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 标签描述
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 基于commitid
    /// </summary>

    std::string getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitDto& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string target_;
    bool targetIsSet_;
    CommitDto commit_;
    bool commitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateTagResponse_H_
