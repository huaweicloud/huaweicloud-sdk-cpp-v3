
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  RemoveAgentPathResponse
    : public ModelBase, public HttpResponse
{
public:
    RemoveAgentPathResponse();
    virtual ~RemoveAgentPathResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemoveAgentPathResponse members

    /// <summary>
    /// 移除的路径列表 
    /// </summary>

    std::vector<std::string>& getRemoved();
    bool removedIsSet() const;
    void unsetremoved();
    void setRemoved(const std::vector<std::string>& value);

    /// <summary>
    /// 不存在的路径
    /// </summary>

    std::vector<std::string>& getNotExisted();
    bool notExistedIsSet() const;
    void unsetnotExisted();
    void setNotExisted(const std::vector<std::string>& value);


protected:
    std::vector<std::string> removed_;
    bool removedIsSet_;
    std::vector<std::string> notExisted_;
    bool notExistedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RemoveAgentPathResponse_H_
