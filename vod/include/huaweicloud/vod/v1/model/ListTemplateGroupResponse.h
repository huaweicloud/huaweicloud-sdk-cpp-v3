
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/TemplateGroup.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListTemplateGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplateGroupResponse();
    virtual ~ListTemplateGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateGroupResponse members

    /// <summary>
    /// 模板组信息&lt;br/&gt; 
    /// </summary>

    std::vector<TemplateGroup>& getTemplateGroupList();
    bool templateGroupListIsSet() const;
    void unsettemplateGroupList();
    void setTemplateGroupList(const std::vector<TemplateGroup>& value);

    /// <summary>
    /// 总记录条数&lt;br/&gt; 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 错误码&lt;br/&gt; 
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误描述&lt;br/&gt; 
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::vector<TemplateGroup> templateGroupList_;
    bool templateGroupListIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTemplateGroupResponse_H_
