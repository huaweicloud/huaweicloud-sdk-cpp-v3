
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListBandwidthsLimitRequest
    : public ModelBase
{
public:
    ListBandwidthsLimitRequest();
    virtual ~ListBandwidthsLimitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBandwidthsLimitRequest members

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页起始点
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 翻页方向
    /// </summary>

    bool isPageReverse() const;
    bool pageReverseIsSet() const;
    void unsetpageReverse();
    void setPageReverse(bool value);

    /// <summary>
    /// 只显示指定的字段。使用ext-fields时在默认显示的字段基础上追加字段
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 根据charge_mode过滤
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string marker_;
    bool markerIsSet_;
    bool pageReverse_;
    bool pageReverseIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBandwidthsLimitRequest& dereference_from_shared_ptr(std::shared_ptr<ListBandwidthsLimitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListBandwidthsLimitRequest_H_
