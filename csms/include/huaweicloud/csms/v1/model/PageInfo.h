
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_PageInfo_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页信息。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// 下一页查询地址（本页的末尾凭据名称，下一页起始凭据名称）。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 本页的起始凭据名称，上一页末尾凭据名称。
    /// </summary>

    std::string getPreviousMarker() const;
    bool previousMarkerIsSet() const;
    void unsetpreviousMarker();
    void setPreviousMarker(const std::string& value);

    /// <summary>
    /// 本页返回条目数量。
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    std::string previousMarker_;
    bool previousMarkerIsSet_;
    int32_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_PageInfo_H_
