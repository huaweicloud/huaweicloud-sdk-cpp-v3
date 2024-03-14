
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySupportNodeTypeBean_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySupportNodeTypeBean_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QuerySupportNodeTypeBean
    : public ModelBase
{
public:
    QuerySupportNodeTypeBean();
    virtual ~QuerySupportNodeTypeBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuerySupportNodeTypeBean members

    /// <summary>
    /// 规格类型
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 是否售罄
    /// </summary>

    bool isIsSellout() const;
    bool isSelloutIsSet() const;
    void unsetisSellout();
    void setIsSellout(bool value);


protected:
    std::string nodeType_;
    bool nodeTypeIsSet_;
    bool isSellout_;
    bool isSelloutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QuerySupportNodeTypeBean_H_
