

#include "huaweicloud/eip/v2/model/ListBandwidthPkgResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListBandwidthPkgResponse::ListBandwidthPkgResponse()
{
    bandwidthpkgsIsSet_ = false;
    bandwidthpkgsLinksIsSet_ = false;
}

ListBandwidthPkgResponse::~ListBandwidthPkgResponse() = default;

void ListBandwidthPkgResponse::validate()
{
}

web::json::value ListBandwidthPkgResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthpkgsIsSet_) {
        val[utility::conversions::to_string_t("bandwidthpkgs")] = ModelBase::toJson(bandwidthpkgs_);
    }
    if(bandwidthpkgsLinksIsSet_) {
        val[utility::conversions::to_string_t("bandwidthpkgs_links")] = ModelBase::toJson(bandwidthpkgsLinks_);
    }

    return val;
}

bool ListBandwidthPkgResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidthpkgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidthpkgs"));
        if(!fieldValue.is_null())
        {
            std::vector<BandwidthPkgResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthpkgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidthpkgs_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidthpkgs_links"));
        if(!fieldValue.is_null())
        {
            std::vector<BandwidthPkgPage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthpkgsLinks(refVal);
        }
    }
    return ok;
}


std::vector<BandwidthPkgResp>& ListBandwidthPkgResponse::getBandwidthpkgs()
{
    return bandwidthpkgs_;
}

void ListBandwidthPkgResponse::setBandwidthpkgs(const std::vector<BandwidthPkgResp>& value)
{
    bandwidthpkgs_ = value;
    bandwidthpkgsIsSet_ = true;
}

bool ListBandwidthPkgResponse::bandwidthpkgsIsSet() const
{
    return bandwidthpkgsIsSet_;
}

void ListBandwidthPkgResponse::unsetbandwidthpkgs()
{
    bandwidthpkgsIsSet_ = false;
}

std::vector<BandwidthPkgPage>& ListBandwidthPkgResponse::getBandwidthpkgsLinks()
{
    return bandwidthpkgsLinks_;
}

void ListBandwidthPkgResponse::setBandwidthpkgsLinks(const std::vector<BandwidthPkgPage>& value)
{
    bandwidthpkgsLinks_ = value;
    bandwidthpkgsLinksIsSet_ = true;
}

bool ListBandwidthPkgResponse::bandwidthpkgsLinksIsSet() const
{
    return bandwidthpkgsLinksIsSet_;
}

void ListBandwidthPkgResponse::unsetbandwidthpkgsLinks()
{
    bandwidthpkgsLinksIsSet_ = false;
}

}
}
}
}
}


