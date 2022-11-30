
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTranscodeTemplateResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTranscodeTemplateResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TransTemplateRsp.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListTranscodeTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTranscodeTemplateResponse();
    virtual ~ListTranscodeTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTranscodeTemplateResponse members

    /// <summary>
    /// 模板组信息&lt;br/&gt; 
    /// </summary>

    std::vector<TransTemplateRsp>& getTemplateGroupList();
    bool templateGroupListIsSet() const;
    void unsettemplateGroupList();
    void setTemplateGroupList(const std::vector<TransTemplateRsp>& value);

    /// <summary>
    /// 总记录条数&lt;br/&gt; 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TransTemplateRsp> templateGroupList_;
    bool templateGroupListIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTranscodeTemplateResponse_H_
